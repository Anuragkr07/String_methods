char change_case (char c) {
    if (std::isupper(c)) 
        return std::tolower(c); 
    else
        return std::toupper(c); 
}

int main() {
    std::string str;
    str = "hEllo world";
    std::transform(str.begin(), str.end(), str.begin(), change_case);
    std::cout << str;
    return 0;
}

// O/p: HeLLO WORLD


/*

  in python:
txt = "hEllo world"
txt = txt.swapcase()
print(txt)


O/p: HeLLO WORLD

*/
