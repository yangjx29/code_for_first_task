void  cAcets02mRl (char *);

int main () {
    char HAeYJh1Kv [(129 - 28)];
    char iVxefjJbcXv [(1086 - 985)];
    int z1EPzXJN6;
    for (; cin.getline (iVxefjJbcXv, (543 - 442));) {
        cAcets02mRl (HAeYJh1Kv);
        memset (HAeYJh1Kv, (382 - 382), sizeof (HAeYJh1Kv));
        {
            z1EPzXJN6 = (340 - 198) - (271 - 129);
            for (; z1EPzXJN6 < strlen (iVxefjJbcXv);) {
                if (!('(' != iVxefjJbcXv[z1EPzXJN6])) {
                    HAeYJh1Kv[z1EPzXJN6] = '$';
                }
                if (!(')' != iVxefjJbcXv[z1EPzXJN6])) {
                    HAeYJh1Kv[z1EPzXJN6] = '?';
                }
                if (iVxefjJbcXv[z1EPzXJN6] != '(' && iVxefjJbcXv[z1EPzXJN6] != ')') {
                    HAeYJh1Kv[z1EPzXJN6] = ' ';
                }
                z1EPzXJN6 = z1EPzXJN6 + (709 - 708);
            }
        }
        {
            z1EPzXJN6 = (1049 - 904) - (647 - 503);
            for (; z1EPzXJN6 >= (241 - 241);) {
                if (HAeYJh1Kv[z1EPzXJN6] != ' ') {
                    HAeYJh1Kv[z1EPzXJN6 + (893 - 892)] = (993 - 993);
                    break;
                }
                z1EPzXJN6 = z1EPzXJN6 - (87 - 86);
            }
        }
        {
            z1EPzXJN6 = (1836 - 948) - (1035 - 147);
            for (; strlen (HAeYJh1Kv) > z1EPzXJN6;) {
                if (HAeYJh1Kv[z1EPzXJN6] != ' ') {
                    strcpy (HAeYJh1Kv, HAeYJh1Kv +z1EPzXJN6);
                    break;
                }
                z1EPzXJN6 = z1EPzXJN6 + (977 - 976);
            }
        }
        cout << iVxefjJbcXv << endl << HAeYJh1Kv << endl;
    }
}

void  cAcets02mRl (char HAeYJh1Kv []) {
    int z1EPzXJN6;
    int DY52qCu;
    DY52qCu = (57 - 57);
    {
        z1EPzXJN6 = (245 - 245);
        for (; z1EPzXJN6 < strlen (HAeYJh1Kv);) {
            if (!('$' != HAeYJh1Kv[z1EPzXJN6])) {
                DY52qCu = (887 - 490) - (985 - 589);
                for (; strlen (HAeYJh1Kv) > DY52qCu;) {
                    if (!('$' != HAeYJh1Kv[DY52qCu])) {
                        break;
                    }
                    else {
                        if (!('?' != HAeYJh1Kv[DY52qCu])) {
                            cAcets02mRl (HAeYJh1Kv);
                            HAeYJh1Kv[DY52qCu] = ' ';
                            HAeYJh1Kv[z1EPzXJN6] = ' ';
                            return;
                        }
                        else
                            ;
                    }
                    DY52qCu = DY52qCu +(376 - 375);
                }
            }
            z1EPzXJN6 = z1EPzXJN6 + (184 - 183);
        }
    }
}

