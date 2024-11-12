int main () {
    char str [(1514 - 514)];
    int v2myZ7jG;
    int j;
    int Urgopc9xO;
    int V21p307knL;
    int NPWfYUhMLrwz [1000];
    int MAnBVUs5vdi;
    v2myZ7jG = (882 - 882);
    j = (773 - 773);
    Urgopc9xO = (56 - 56);
    cin >> str;
    for (V21p307knL = 0, j = 0; !('\0' == str[V21p307knL]); V21p307knL++, j++) {
        if (97 <= str[V21p307knL] && 122 >= str[V21p307knL]) {
            NPWfYUhMLrwz[j] = str[V21p307knL] - 'a';
        }
        if (str[V21p307knL] >= 65 && str[V21p307knL] <= 90) {
            NPWfYUhMLrwz[j] = str[V21p307knL] - 'A';
        };
    }
    cout << "(" << (char) ('A' + NPWfYUhMLrwz[0]) << ",";
    for (Urgopc9xO = (24 - 23); Urgopc9xO < j; Urgopc9xO++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (NPWfYUhMLrwz[Urgopc9xO] == NPWfYUhMLrwz[Urgopc9xO -1])
            v2myZ7jG = v2myZ7jG + 1;
        else {
            cout << v2myZ7jG + 1 << ")";
            v2myZ7jG = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            cout << "(" << (char) ('A' + NPWfYUhMLrwz[Urgopc9xO]) << ",";
        };
    }
    cout << v2myZ7jG + 1 << ")" << endl;
    return 0;
}

