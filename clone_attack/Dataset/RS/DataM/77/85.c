int rFp80JgK9 [(390 - 290)] = {0};
char boy, girl;
char a [(946 - 846)];

void  f () {
    int k;
    int i;
    k = (929 - 928);
    for (i = 0; i < strlen (a); i++) {
        if (a[i] == boy && rFp80JgK9[i] == 0) {
            for (; rFp80JgK9[i + k] == (541 - 540);) {
                k++;
            }
            if (a[i + k] == girl) {
                cout << i << ' ' << i + k << endl;
                rFp80JgK9[i] = (378 - 377);
                rFp80JgK9[i + k] = 1;
                break;
            }
            else {
                k = 1;
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
                continue;
            };
        };
    }
    if (i + k < strlen (a) - 1)
        f ();
}

int main () {
    cin.getline (a, 100);
    boy = a[0];
    girl = a[strlen (a) - 1];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    f ();
    return 0;
}

