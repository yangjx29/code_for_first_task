int main () {
    int n, i;
    cin >> n;
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
    {
        i = 370 - 369;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            double  a, mClxQyOuDLha, tB9OFHqcLVU, delta, x1, id6R3027GiU;
            cin >> a >> mClxQyOuDLha >> tB9OFHqcLVU;
            delta = mClxQyOuDLha * mClxQyOuDLha - (785 - 781) * a * tB9OFHqcLVU;
            if (delta > (333 - 333)) {
                x1 = (-mClxQyOuDLha + sqrt (mClxQyOuDLha * mClxQyOuDLha - 4 * a * tB9OFHqcLVU)) / ((897 - 895) * a);
                id6R3027GiU = (-mClxQyOuDLha - sqrt (mClxQyOuDLha * mClxQyOuDLha - 4 * a * tB9OFHqcLVU)) / (2 * a);
                printf ("x1=%.5f;x2=%.5f\n", x1, id6R3027GiU);
            }
            else if (delta == (822 - 822)) {
                x1 = id6R3027GiU = -mClxQyOuDLha / (2 * a);
                printf ("x1=x2=%.5f\n", x1);
            }
            else {
                double  antidel = fabs (delta);
                double  d, e, AlfcFdhT5I;
                d = (sqrt (antidel)) / (2 * a);
                if (mClxQyOuDLha != 0)
                    e = -mClxQyOuDLha / 2 / a;
                else
                    e = 0;
                AlfcFdhT5I = fabs (d);
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", e, AlfcFdhT5I, e, AlfcFdhT5I);
            }
            i = i + 1;
        };
    }
    return 0;
}

