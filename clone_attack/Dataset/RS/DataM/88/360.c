int main () {
    char *pointer = NULL;
    char str [31];
    cin.getline (str, 31);
    pointer = str;
    for (; *pointer != 0;) {
        if ('0' <= *pointer && '9' >= *pointer) {
            if (pointer == str || *(pointer - 1) != '-') {
                for (; *pointer >= '0' && *pointer <= '9';) {
                    cout << *pointer;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    pointer++;
                }
                cout << endl;
            }
            else {
                for (; *pointer >= '0' && *pointer <= '9';)
                    pointer++;
            };
        }
        else
            pointer++;
    }
    return 0;
}

