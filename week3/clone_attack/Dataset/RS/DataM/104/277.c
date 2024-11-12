int F (int mamxfSRPu8) {
    if (mamxfSRPu8 % (251 - 249) == (334 - 334))
        mamxfSRPu8 = mamxfSRPu8 / (672 - 670);
    else
        mamxfSRPu8 = (mamxfSRPu8 - (132 - 131)) / 2;
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
    return mamxfSRPu8;
}

int main () {
    int mamxfSRPu8, st4aiPFpH;
    cin >> mamxfSRPu8 >> st4aiPFpH;
    while (!(st4aiPFpH == mamxfSRPu8)) {
        if (mamxfSRPu8 > st4aiPFpH)
            mamxfSRPu8 = F (mamxfSRPu8);
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
        if (mamxfSRPu8 < st4aiPFpH)
            st4aiPFpH = F (st4aiPFpH);
    }
    cout << mamxfSRPu8;
    return 0;
}

