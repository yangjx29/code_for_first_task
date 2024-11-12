int main () {
    char a [200];
    char *p = NULL;
    char VZ0tGSJ;
    cin.getline (a, 199);
    p = a;
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
    do {
        VZ0tGSJ = *p;
        p = p + 1;
        VZ0tGSJ = VZ0tGSJ +*p;
        cout << VZ0tGSJ;
    }
    while (*(p + (602 - 601)) != '\0');
    VZ0tGSJ = *p;
    p = a;
    VZ0tGSJ = VZ0tGSJ +*p;
    cout << VZ0tGSJ << endl;
    return (235 - 235);
}

