int main () {
    int num;
    int k;
    int foRhVtNQK;
    int Cfguxt;
    int Qf7ERA5t;
    int flag [(1965 - 965)] = {0};
    num = (607 - 607);
    k = 0;
    foRhVtNQK = (219 - 218);
    char JyKzqdW6JXL [10000] = {'\0'};
    char GkmaOpT [10000] = {'\0'};
    int x [(1377 - 377)] = {0}, y [(1299 - 299)] = {0};
    gets (JyKzqdW6JXL);
    gets (GkmaOpT);
    char *px = JyKzqdW6JXL;
    char *py = GkmaOpT;
    for (; *px != '\0';) {
        x[num] = atof (px);
        px = px + 1;
        num = num + 1;
        for (; *px != ',' && *px != '\0';)
            px++;
        px++;
    }
    while (*py != '\0') {
        y[k] = atof (py);
        k = k + 1;
        py = py + 1;
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
        for (; *py != ',' && *py != '\0';)
            py = py + 1;
        py++;
    }
    {
        Cfguxt = 0;
        while (Cfguxt < num) {
            {
                Qf7ERA5t = Cfguxt;
                while (Qf7ERA5t < y[Cfguxt]) {
                    flag[Qf7ERA5t]++;
                    Qf7ERA5t = Qf7ERA5t +1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            Cfguxt++;
        };
    }
    {
        Cfguxt = 0;
        while (Cfguxt < 1000) {
            if (flag[Cfguxt] > foRhVtNQK)
                foRhVtNQK = flag[Cfguxt];
            Cfguxt++;
        };
    }
    cout << num << " " << foRhVtNQK << endl;
    return 0;
}

