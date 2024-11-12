int main () {
    char FM4vzTSxCQ [80];
    char TamodPv [80];
    int ucUPqwo;
    cin.getline (FM4vzTSxCQ, 80);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin.getline (TamodPv, 80);
    for (ucUPqwo = 0; !('\0' == FM4vzTSxCQ[ucUPqwo]) || !('\0' == TamodPv[ucUPqwo]); ucUPqwo++) {
        if (65 <= FM4vzTSxCQ[ucUPqwo] && 90 >= FM4vzTSxCQ[ucUPqwo])
            FM4vzTSxCQ[ucUPqwo] = FM4vzTSxCQ[ucUPqwo] + 32;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (65 <= TamodPv[ucUPqwo] && 90 >= TamodPv[ucUPqwo])
            TamodPv[ucUPqwo] = TamodPv[ucUPqwo] + 32;
    }
    {
        ucUPqwo = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (!('\0' == FM4vzTSxCQ[ucUPqwo]) && !('\0' == TamodPv[ucUPqwo])) {
            if (FM4vzTSxCQ[ucUPqwo] == TamodPv[ucUPqwo])
                continue;
            else if (FM4vzTSxCQ[ucUPqwo] > TamodPv[ucUPqwo]) {
                cout << ">" << endl;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
            else {
                cout << "<" << endl;
                break;
            }
            ucUPqwo = ucUPqwo + 1;
        };
    }
    if (FM4vzTSxCQ[ucUPqwo] == '\0' && TamodPv[ucUPqwo] == '\0')
        cout << "=" << endl;
    else if (FM4vzTSxCQ[ucUPqwo] == '\0' && TamodPv[ucUPqwo] != '\0')
        cout << "<" << endl;
    else if (FM4vzTSxCQ[ucUPqwo] != '\0' && TamodPv[ucUPqwo] == '\0')
        cout << ">" << endl;
    return 0;
}

