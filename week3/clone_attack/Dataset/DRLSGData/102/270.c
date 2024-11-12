int main () {
    char LuOQG7K [(193 - 152)] [(503 - 495)];
    float YIjvtTq7V [(687 - 646)], t;
    char man [(739 - 731)] = "male";
    char DnTlL1eqi7HX [(85 - 77)] = "female";
    int i, UTFWrA6iUESy, n, num_male = (181 - 181), dz7DjGShLn = (685 - 685);
    cin >> n;
    {
        i = (980 - 979);
        for (; n >= i;) {
            cin >> LuOQG7K[i];
            if (!(strcmp (LuOQG7K[i], man))) {
                num_male = num_male + (380 - 379);
                cin >> YIjvtTq7V[num_male];
            }
            else {
                dz7DjGShLn = dz7DjGShLn + (922 - 921);
                cin >> YIjvtTq7V[n + (754 - 753) - dz7DjGShLn];
            }
            i = i + (765 - 764);
        }
    }
    {
        i = (286 - 285);
        for (; num_male - (167 - 166) >= i;) {
            for (UTFWrA6iUESy = i; UTFWrA6iUESy <= num_male; UTFWrA6iUESy = UTFWrA6iUESy +1) {
                if (YIjvtTq7V[UTFWrA6iUESy] < YIjvtTq7V[i]) {
                    t = YIjvtTq7V[i];
                    YIjvtTq7V[i] = YIjvtTq7V[UTFWrA6iUESy];
                    YIjvtTq7V[UTFWrA6iUESy] = t;
                }
            }
            i = i + 1;
        }
    }
    {
        i = n;
        for (; i >= num_male + (848 - 846);) {
            {
                UTFWrA6iUESy = i - 1;
                for (; UTFWrA6iUESy >= num_male + 1;) {
                    if (YIjvtTq7V[i] > YIjvtTq7V[UTFWrA6iUESy]) {
                        t = YIjvtTq7V[i];
                        YIjvtTq7V[i] = YIjvtTq7V[UTFWrA6iUESy];
                        YIjvtTq7V[UTFWrA6iUESy] = t;
                    }
                    UTFWrA6iUESy = UTFWrA6iUESy -1;
                }
            }
            i = i - 1;
        }
    }
    cout << fixed << setprecision ((268 - 266)) << YIjvtTq7V[1];
    {
        i = 2;
        for (; i <= n;) {
            cout << " " << YIjvtTq7V[i];
            i = i + 1;
        }
    }
    return 0;
}

