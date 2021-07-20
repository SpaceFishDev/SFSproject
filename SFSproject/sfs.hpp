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
        string(char*);
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

}
