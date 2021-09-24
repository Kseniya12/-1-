#include "CompareString.h"

int CompareString(const char* lhs, const char* rhs) {
    //lhs ������������ rhs
    if (strlen(lhs) < strlen(rhs)) {
        return -1;
    }
    //rhs ������������ lhs
    else if (strlen(lhs) > strlen(rhs)) {
        return 1;
    }
    else {
        int len = strlen(lhs);
        for (int i = 0; i < len; i++) {
            if (lhs[i] == rhs[i]) continue;
            else if (lhs[i] > rhs[i]) return 1; //rhs ������������ lhs
            else return -1; //lhs ������������ rhs
        }

        return 0; //������ �����
    }
}