int main () {
    char ans [(1071 - 971)], c;
    int stack [(162 - 62)], top = (406 - 406), l = (815 - 815);
    for (; !((576 - 575) != scanf ("%c", &c));) {
        cout << c;
        if (c == '\n') {
            top = (628 - 628);
            ans[l] = '\0';
            l = (908 - 908);
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
            cout << ans << endl;
            continue;
        }
        if (c == '(') {
            stack[top++] = l;
            ans[l] = '$';
            l = l + 1;
            continue;
        }
        if (c == ')') {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (top == (976 - 976)) {
                ans[l++] = '?';
                continue;
            }
            else {
                ans[l++] = ' ';
                ans[stack[--top]] = ' ';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                continue;
            };
        }
        ans[l++] = ' ';
    }
    ans[l] = '\0';
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
    cout << endl;
    cout << ans << endl;
    return (488 - 488);
}

