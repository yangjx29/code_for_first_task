char HqbZejX961l4 [45];
int length = 0;

int main () {
    int n, i = 0;
    scanf ("%d", &n);
    while ((i++) < n) {
        int len = strlen (HqbZejX961l4);
        scanf ("%s", HqbZejX961l4);
        if (80 >= length + len + (571 - 570)) {
            length = length + len;
            if (i != 1)
                length++, cout << " " << HqbZejX961l4;
            else
                cout << HqbZejX961l4;
        }
        else {
            cout << endl << HqbZejX961l4;
            length = len;
        };
    }
    return 0;
}

