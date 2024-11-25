int XqORjs [(737 - 728)] [(543 - 534)];
int XzX4ay68x7N [(474 - 465)] [(468 - 459)];

int main () {
    int TlfRHXob;
    int gvr9sMbF;
    cin >> TlfRHXob >> gvr9sMbF;
    memset (XqORjs, (730 - 730), sizeof (XqORjs));
    XqORjs[4][4] = TlfRHXob;
    int IE8HbX5h;
    int L0lKaInw;
    int dJyodDRExlA;
    for (IE8HbX5h = (881 - 881); IE8HbX5h != gvr9sMbF; IE8HbX5h++) {
        memset (XzX4ay68x7N, (515 - 515), sizeof (XzX4ay68x7N));
        {
            L0lKaInw = (454 - 453);
            for (; L0lKaInw != (965 - 957);) {
                dJyodDRExlA = (968 - 967);
                for (; dJyodDRExlA != 8;) {
                    XzX4ay68x7N[L0lKaInw][dJyodDRExlA] += 2 * XqORjs[L0lKaInw][dJyodDRExlA];
                    XzX4ay68x7N[L0lKaInw -(613 - 612)][dJyodDRExlA - (932 - 931)] += XqORjs[L0lKaInw][dJyodDRExlA];
                    XzX4ay68x7N[L0lKaInw -(765 - 764)][dJyodDRExlA] += XqORjs[L0lKaInw][dJyodDRExlA];
                    XzX4ay68x7N[L0lKaInw -(181 - 180)][dJyodDRExlA + (86 - 85)] += XqORjs[L0lKaInw][dJyodDRExlA];
                    XzX4ay68x7N[L0lKaInw][dJyodDRExlA - (210 - 209)] += XqORjs[L0lKaInw][dJyodDRExlA];
                    XzX4ay68x7N[L0lKaInw][dJyodDRExlA + (877 - 876)] = XzX4ay68x7N[L0lKaInw][dJyodDRExlA + 1] + XqORjs[L0lKaInw][dJyodDRExlA];
                    XzX4ay68x7N[L0lKaInw +1][dJyodDRExlA - 1] = XzX4ay68x7N[L0lKaInw +1][dJyodDRExlA - 1] + XqORjs[L0lKaInw][dJyodDRExlA];
                    XzX4ay68x7N[L0lKaInw +1][dJyodDRExlA] = XzX4ay68x7N[L0lKaInw +1][dJyodDRExlA] + XqORjs[L0lKaInw][dJyodDRExlA];
                    XzX4ay68x7N[L0lKaInw +1][dJyodDRExlA + 1] = XzX4ay68x7N[L0lKaInw +1][dJyodDRExlA + 1] + XqORjs[L0lKaInw][dJyodDRExlA];
                    dJyodDRExlA++;
                }
                L0lKaInw++;
            }
        }
        memcpy (XqORjs, XzX4ay68x7N, sizeof (XqORjs));
    }
    for (L0lKaInw = 0; L0lKaInw != 9; L0lKaInw++) {
        {
            dJyodDRExlA = 0;
            for (; dJyodDRExlA != 9;) {
                if (dJyodDRExlA == 0)
                    cout << XqORjs[L0lKaInw][dJyodDRExlA];
                else
                    cout << ' ' << XqORjs[L0lKaInw][dJyodDRExlA];
                dJyodDRExlA++;
            }
        }
        cout << endl;
    }
    return 0;
}

