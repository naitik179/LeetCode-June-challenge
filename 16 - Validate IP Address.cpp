class Solution {
public:
    std::vector<std::string> split(std::string s, char delim) {
        std::vector<std::string> res;
        std::string t;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == delim) {
                res.push_back(t);
                t = "";
            } else {
                t += s[i];
            }
        }
        res.push_back(t);
        return res;
    }
    
    // check if a part of ipv4 is valid
    bool is_valid_ipv4(std::string s) {
        // if len is 0 or > 3 then impossible (max number is 255)
        if (s.size() == 0 || s.size() > 3)
            return false;
        int num = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (i == 0 && s[i] == '0' && s.size() > 1)
                return false;
            if (!std::isdigit(s[i]))
                return false;
            num = num * 10 + (s[i] - '0');
        }
        if (num > 255)
            return false;
        return true;
    }
    
    // check if a part of ipv6 is valid
    bool is_valid_ipv6(std::string s) {
        // if more than 4 digits or 0 return false
        if (s.size() == 0 || s.size() > 4)
            return false;
        // check if all are hex digits
        // ref: https://en.cppreference.com/w/cpp/string/byte/isxdigit
        for (int i = 0; i < s.size(); ++i)
            if (!std::isxdigit(s[i]))
                return false;
        return true;
    }
    
    string validIPAddress(string IP) {
        auto splitted_ip = split(IP, '.'); // try to split on '.' for ipv4
        // if len == 1 then no '.' in the string
        if (splitted_ip.size() == 1) {
            splitted_ip = split(IP, ':'); // try to split on ':' for ipv6
            if (splitted_ip.size() != 8) 
                return "Neither";
            for (auto s: splitted_ip) {
                if (!is_valid_ipv6(s))
                    return "Neither";
            }
            return "IPv6";
        } else if (splitted_ip.size() == 4) {
            for (auto s: splitted_ip) {
                if (!is_valid_ipv4(s))
                    return "Neither";
            }
            return "IPv4";
        } else {
            return "Neither";
        }
    }
};
