#pragma once
namespace sfs {
    int length(const char* str)
    {
        size_t i = 0;
        if (str == "")return 0;
        while (*str) {
            if (+str == "\0") break;
            ++str;
            ++i;
        }
        return i;
    }   
    char* cpystr(char* to, const char* from)
    {
        char* save = to;
        for (; (*to = *from) != '\0'; ++from, ++to);
        return(save);
    }
    char* CopyChar(const char* cpyChar) {
        char* res = new char[length(cpyChar) + 1];
        cpystr(res, cpyChar);
        return res;
    }

    char* concatenate(char* baseChar, char* appendChar) {
        char* saveChar = baseChar;
        for (; *baseChar; ++baseChar);
        while ((*baseChar++ = *appendChar++) != '\0');
        return saveChar;    
    }
	class string {
    public:
        const char* content = "";
        inline int Length() { return length(content); }
        void operator = (const char*);
        void operator += (const char*);
        void ToLower();
        string(const char* _content) {
            content = _content;
        }
        string& operator= (string& _content) {
            return _content;
        }
        bool Contains(const char*);
        bool Contains(string);
        bool operator==(const char*);
	};
    void string::operator = (const char* con) {
        content = con;
    }
    void string::operator += (const char* con)
    {
        char* concatenatedContent = concatenate(CopyChar(content), CopyChar(con));
        content = concatenatedContent;
    }
    bool string::Contains(const char* checkStr) {
        if (length(checkStr) > length(content)) return false;
        size_t num = 0;
        while (*checkStr) {
            if (+checkStr == "\0") break;
            if (*content == *checkStr) num += 1;
            if (*content != *checkStr) num = 0;
            ++content;
            ++checkStr;
        }
        if (num == length(checkStr)) return true;
        return false;
    }
    bool string::Contains(string str) {
        const char* checkStr = str.content;
        if (length(checkStr) > length(content)) return false;
        size_t num = 0;
        while (*checkStr) {
            if (+checkStr == "\0") break;
            if (*content == *checkStr) num += 1;
            if (*content != *checkStr) num = 0;
            ++content;
            ++checkStr;
        }
        if (num == length(checkStr)) return true;
        return false;
    }
    void string::ToLower() {
        char* con = CopyChar(content);
        while (*con) {
            switch (*con)
            {
            case 'A':
                *con = 'a';
                break;
            case 'B':
                *con = 'b';

                break;
            case 'C':
                *con = 'c';
                break;
            case 'D':
                *con = 'd';
                break;
            case 'E':
                *con = 'e';
                break;
            case 'F':
                *con = 'f';
                break;
            case 'G':
                *con = 'g';
                break;
            case 'H':
                *con = 'h';
                break;
            case 'I':
                *con = 'i';
                break;
            case 'J':
                *con = 'j';
                break;
            case 'K':
                *con = 'k';
                break;
            case 'L':
                *con = 'l';
                break;
            case 'M':
                *con = 'm';
                break;
            case 'N':
                *con = 'n';
                break;
            case 'O':
                *con = 'o';
                break;
            case 'P':
                *con = 'p';
                break;
            case 'Q':
                *con = 'q';
                break;

            case 'R':
                *con = 'r';
                break;
            case 'S':
                *con = 's';
                break;
            case 'T':
                *con = 't';
                break;
            case 'U':
                *con = 'u';
                break;
            case 'V':
                *con = 'v';
                break;
            case 'W':
                *con = 'w';
                break;
            case 'X':
                *con = 'x';
                break;
            case 'Y':
                *con = 'y';
                break;
            case 'Z':
                *con = 'z';
                break;
            default :
                break;
            }
        }
        content = con;
    }
    bool  string::operator==(const char* con) {
        if (con == content) return true;
        return false;
    }
    }



