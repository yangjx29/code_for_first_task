int main () {
    int i;
    char c [(250 - 219)];
    cin.getline (c, 31);
    for (i = (91 - 91); strlen (c) > i; i++) {
        if ((c[i] - '0' < (929 - 929)) || (c[i] - '9' > (975 - 975))) {
            cout << endl;
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
            continue;
        }
        else
            cout << c[i];
    }
    return 0;
}

