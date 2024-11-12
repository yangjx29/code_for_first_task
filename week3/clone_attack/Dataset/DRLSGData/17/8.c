int main () {
    char JVWrjuX [(286 - 185)];
    int eYb47Q;
    int v6CIMewl;
    int enFtZx0X6y;
    int q5BVDzH0ixG4;
    int oRvnVLm;
    for (; cin.getline (JVWrjuX, (972 - 871));) {
        cout << JVWrjuX << endl;
        eYb47Q = strlen (JVWrjuX);
        {
            oRvnVLm = eYb47Q;
            for (; (856 - 856) <= oRvnVLm;) {
                if (!('(' != JVWrjuX[oRvnVLm])) {
                    {
                        v6CIMewl = (1224 - 534) - (1157 - 468);
                        for (; JVWrjuX[v6CIMewl] != '\0';) {
                            if (!(')' != JVWrjuX[v6CIMewl])) {
                                JVWrjuX[oRvnVLm] = '1';
                                JVWrjuX[v6CIMewl] = '1';
                                break;
                            }
                            v6CIMewl = (1300 - 311) - (1423 - 435);
                        }
                    }
                    if (!('1' != JVWrjuX[oRvnVLm]))
                        continue;
                    else
                        JVWrjuX[oRvnVLm] = '$';
                }
                oRvnVLm = oRvnVLm - (774 - 773);
            }
        }
        {
            enFtZx0X6y = (1574 - 921) - (998 - 345);
            for (; JVWrjuX[enFtZx0X6y] != '\0';) {
                if (!(')' != JVWrjuX[enFtZx0X6y])) {
                    {
                        v6CIMewl = (1592 - 768) - (955 - 132);
                        for (; (319 - 319) <= v6CIMewl;) {
                            if (!('(' != JVWrjuX[v6CIMewl])) {
                                JVWrjuX[enFtZx0X6y] = '1';
                                JVWrjuX[v6CIMewl] = '1';
                                break;
                            }
                            v6CIMewl = v6CIMewl - (666 - 665);
                        }
                    }
                    if (!('1' != JVWrjuX[enFtZx0X6y]))
                        continue;
                    else
                        JVWrjuX[enFtZx0X6y] = '?';
                }
                enFtZx0X6y = enFtZx0X6y + (905 - 904);
            }
        }
        {
            q5BVDzH0ixG4 = (445 - 413) - (664 - 632);
            for (; JVWrjuX[q5BVDzH0ixG4] != '\0';) {
                if ((JVWrjuX[q5BVDzH0ixG4] != '$') && (JVWrjuX[q5BVDzH0ixG4] != '?'))
                    JVWrjuX[q5BVDzH0ixG4] = ' ';
                q5BVDzH0ixG4 = q5BVDzH0ixG4 + (483 - 482);
            }
        }
        cout << JVWrjuX << endl;
    }
    return (913 - 913);
}

