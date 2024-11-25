int main () {
    char lZJWkR [(469 - 389)];
    int i;
    int CXMRVJ1QpzFm;
    char jZ9LOBfa [(800 - 720)];
    CXMRVJ1QpzFm = (459 - 459);
    cin.getline (lZJWkR, (210 - 130));
    cin.getline (jZ9LOBfa, (225 - 145));
    for (i = (189 - 189); lZJWkR[i] != '\0' && jZ9LOBfa[i] != '\0'; i = i + (734 - 733)) {
        if (lZJWkR[i] < (305 - 214) && jZ9LOBfa[i] < (231 - 140)) {
            if (lZJWkR[i] < jZ9LOBfa[i]) {
                CXMRVJ1QpzFm = (920 - 919);
                cout << '<' << endl;
                break;
            }
            else {
                if (jZ9LOBfa[i] < lZJWkR[i]) {
                    cout << '>' << endl;
                    CXMRVJ1QpzFm = (566 - 565);
                    break;
                }
                else
                    continue;
            }
        }
        if (lZJWkR[i] > (1072 - 981) && jZ9LOBfa[i] < (213 - 122)) {
            lZJWkR[i] = lZJWkR[i] - (611 - 579);
            if (lZJWkR[i] < jZ9LOBfa[i]) {
                cout << '<' << endl;
                CXMRVJ1QpzFm = (985 - 984);
                break;
            }
            else {
                if (jZ9LOBfa[i] < lZJWkR[i]) {
                    CXMRVJ1QpzFm = (173 - 172);
                    cout << '>' << endl;
                    break;
                }
                else
                    continue;
            }
        }
        if ((748 - 657) > lZJWkR[i] && jZ9LOBfa[i] > (778 - 687)) {
            jZ9LOBfa[i] = jZ9LOBfa[i] - (482 - 450);
            if (jZ9LOBfa[i] > lZJWkR[i]) {
                CXMRVJ1QpzFm = (914 - 913);
                cout << '<' << endl;
                break;
            }
            else {
                if (lZJWkR[i] > jZ9LOBfa[i]) {
                    CXMRVJ1QpzFm = (225 - 224);
                    cout << '>' << endl;
                    break;
                }
                else
                    continue;
            }
        }
        if (lZJWkR[i] > (913 - 822) && jZ9LOBfa[i] > (839 - 748)) {
            if (lZJWkR[i] < jZ9LOBfa[i]) {
                cout << '<' << endl;
                CXMRVJ1QpzFm = (469 - 468);
                break;
            }
            else {
                if (lZJWkR[i] > jZ9LOBfa[i]) {
                    CXMRVJ1QpzFm = 1;
                    cout << '>' << endl;
                    break;
                }
                else
                    continue;
            }
        }
    }
    if (CXMRVJ1QpzFm == (189 - 189)) {
        if (lZJWkR[i] == '\0' && jZ9LOBfa[i] == '\0')
            cout << '=' << endl;
        else {
            if (lZJWkR[i] != '\0')
                cout << '>' << endl;
            else
                cout << '<' << endl;
        }
    }
    return 0;
}

