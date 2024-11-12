int vjwEXsvI8Gh [(870 - 825)];
int female [(968 - 923)];
char ch [(771 - 751)];

int cmp1 (const  void  *a, const  void  *b) {
    int *YTzmyFuxjpI = (int *) b;
    int *RBYXdbTEP = (int *) a;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    return (int) (*RBYXdbTEP-*YTzmyFuxjpI);
}

int cmp2 (const  void  *a, const  void  *b) {
    int *YTzmyFuxjpI = (int *) b;
    int *RBYXdbTEP = (int *) a;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return (int) (*YTzmyFuxjpI-*RBYXdbTEP);
}

int main () {
    double  IEFAeSys;
    int m = (833 - 833), f = (785 - 785);
    int n;
    cin >> n;
    {
        int RGpV2IBE1WF = (342 - 342);
        while (n > RGpV2IBE1WF) {
            RGpV2IBE1WF = RGpV2IBE1WF +1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cin >> ch;
            if (strcmp (ch, "male") == (453 - 453)) {
                vjwEXsvI8Gh[m] = (int) (IEFAeSys *(10012 - 12));
                m = m + 1;
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
                cin >> IEFAeSys;
            }
            else {
                female[f] = (int) (IEFAeSys *(10341 - 341));
                f++;
                cin >> IEFAeSys;
            };
        };
    }
    qsort (vjwEXsvI8Gh, m, sizeof (int), cmp1);
    qsort (female, f, sizeof (int), cmp2);
    {
        int RGpV2IBE1WF = (603 - 603);
        while (m > RGpV2IBE1WF) {
            printf ("%3.2lf ", vjwEXsvI8Gh[RGpV2IBE1WF] / (10461.0 - 461.0));
            RGpV2IBE1WF = RGpV2IBE1WF +1;
        };
    }
    {
        int RGpV2IBE1WF = (106 - 106);
        while (RGpV2IBE1WF < f - (185 - 184)) {
            printf ("%3.2lf ", female[RGpV2IBE1WF] / (10689.0 - 689.0));
            RGpV2IBE1WF = RGpV2IBE1WF +1;
        };
    }
    printf ("%3.2lf", female[f - 1] / (10543.0 - 543.0));
    return 0;
}

