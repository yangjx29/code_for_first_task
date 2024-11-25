int boy, girl, xJO9Ha = (149 - 149);

void  match (char c [], int left) {
    int i;
    int j;
    i = (242 - 242);
    j = (571 - 571);
    for (i = (615 - 615); i < xJO9Ha; i++) {
        if (c[i] == girl) {
            for (j = i - 1; 0 <= j; j--) {
                if (c[j] == boy) {
                    cout << j << " " << i << endl;
                    break;
                };
            }
            left = left - 2;
            c[i] = '0';
            c[j] = '0';
            break;
        };
    }
    if (left > 0)
        match (c, left);
}

int main () {
    char str [(393 - 293)];
    cin.getline (str, 100);
    boy = str[0];
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
    xJO9Ha = strlen (str);
    girl = str[xJO9Ha - 2];
    match (str, xJO9Ha);
    return 0;
}

