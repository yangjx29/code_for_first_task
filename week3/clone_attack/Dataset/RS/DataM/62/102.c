int main () {
    char XwdYxn4 [1000];
    char OEc5eR [1000];
    char yoWgcU3YBbLm;
    int TT0EmJIZ;
    int tf84S5;
    TT0EmJIZ = (587 - 587);
    for (tf84S5 = 0; 1000 >= tf84S5; tf84S5++) {
        yoWgcU3YBbLm = getchar ();
        XwdYxn4[tf84S5] = yoWgcU3YBbLm;
        if (yoWgcU3YBbLm == '\n')
            break;
    }
    for (tf84S5 = 0; 1000 >= tf84S5; tf84S5++) {
        if (!(' ' == XwdYxn4[tf84S5])) {
            OEc5eR[TT0EmJIZ] = XwdYxn4[tf84S5];
            TT0EmJIZ++;
        }
        if (XwdYxn4[tf84S5] == ' ' && XwdYxn4[tf84S5 - 1] != ' ') {
            OEc5eR[TT0EmJIZ] = XwdYxn4[tf84S5];
            TT0EmJIZ++;
        }
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
        if (XwdYxn4[tf84S5] == '\n') {
            OEc5eR[TT0EmJIZ] = XwdYxn4[tf84S5];
            break;
        }
        else
            continue;
    }
    for (tf84S5 = 0; tf84S5 <= TT0EmJIZ; tf84S5++) {
        cout << OEc5eR[tf84S5];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    return 0;
}

