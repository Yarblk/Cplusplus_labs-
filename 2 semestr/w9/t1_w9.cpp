#include <iostream>
#include <string>
#include <vector>
#include <sstream>

std::string replacePlaceholders(const std::string& templateStr, const std::vector<std::pair<std::string, std::string>>& values) {
    std::string result = templateStr;
    
    for (const auto& pair : values) {
        std::string placeholder = "[" + pair.first + "]";
        size_t pos = result.find(placeholder);
        
        while (pos != std::string::npos) {
            result.replace(pos, placeholder.length(), pair.second);
            pos = result.find(placeholder, pos + pair.second.length());
        }
    }
    
    return result;
}

int main() {
    std::string values;
    std::getline(std::cin, values);
    
    std::string templateStr;
    std::getline(std::cin, templateStr);
    
    // Parse the name-value pairs from the input
    std::vector<std::pair<std::string, std::string>> valuePairs;
    std::istringstream iss(values);
    std::string pair;
    while (std::getline(iss, pair, ',')) {
        size_t equalsPos = pair.find('=');
        if (equalsPos != std::string::npos) {
            std::string name = pair.substr(0, equalsPos);
            std::string value = pair.substr(equalsPos + 1);
            valuePairs.push_back({ name, value });
        }
    }
    
    // Replace placeholders in the template
    std::string output = replacePlaceholders(templateStr, valuePairs);
    
    // Print the final result
    std::cout << output << "\n";
    
    return 0;
}
