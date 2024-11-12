int MSKVQWYkgOyn = (643 - 643);

int main () {
    int N7zpqNWCFDKP;
    int count;
    count = 0;
    char c [100] = {"\0"};
    int bx59PZKB (char c []);
    bx59PZKB (c);
    cin.getline (c, 100);
    for (N7zpqNWCFDKP = 0; !('\0' == c[N7zpqNWCFDKP]); N7zpqNWCFDKP = N7zpqNWCFDKP +1)
        count = count + 1;
    MSKVQWYkgOyn = count;
    return 0;
}

int bx59PZKB (char c []) {
    int N7zpqNWCFDKP;
    int JHGfTYANqn;
    int count;
    count = 0;
    bx59PZKB (c);
    for (N7zpqNWCFDKP = 0; c[N7zpqNWCFDKP] != '\0'; N7zpqNWCFDKP = N7zpqNWCFDKP +1)
        count++;
    if (!(0 != MSKVQWYkgOyn))
        return 0;
    else {
        N7zpqNWCFDKP = 0;
        while (count > N7zpqNWCFDKP) {
            if (c[N7zpqNWCFDKP] == c[count - 1]) {
                for (JHGfTYANqn = N7zpqNWCFDKP -1; JHGfTYANqn >= 0; JHGfTYANqn = JHGfTYANqn -1) {
                    if (c[JHGfTYANqn] == '1')
                        continue;
                    if (c[JHGfTYANqn] == c[count - 1]) {
                        break;
                    }
                    if (c[JHGfTYANqn] == c[0]) {
                        MSKVQWYkgOyn = MSKVQWYkgOyn -2;
                        cout << JHGfTYANqn << ' ' << N7zpqNWCFDKP << endl;
                        c[N7zpqNWCFDKP] = '1';
                        c[JHGfTYANqn] = '1';
                        break;
                    };
                };
            }
            N7zpqNWCFDKP = N7zpqNWCFDKP +1;
        };
    };
}

