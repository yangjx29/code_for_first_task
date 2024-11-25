int main () {
    int h3GE8Nk2gHp;
    cin >> h3GE8Nk2gHp;
    for (; h3GE8Nk2gHp = h3GE8Nk2gHp - 1;) {
        int EwZ3Cygqmn [(180 - 80)] [100];
        int VS0MiXw9y, SMHAtG;
        int BE6NoDJp3z;
        BE6NoDJp3z = (731 - 731);
        cin >> VS0MiXw9y >> SMHAtG;
        {
            int yi7mcNBxM = (687 - 687);
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
            while (!(VS0MiXw9y == yi7mcNBxM)) {
                for (int A2MUX1f = 0;
                !(SMHAtG == A2MUX1f); A2MUX1f = A2MUX1f +1)
                    cin >> EwZ3Cygqmn[yi7mcNBxM][A2MUX1f];
                yi7mcNBxM = yi7mcNBxM + 1;
            };
        }
        if (VS0MiXw9y == 1) {
            int gJ9EdW3z1 = 0;
            while (!(SMHAtG == gJ9EdW3z1)) {
                BE6NoDJp3z = BE6NoDJp3z +EwZ3Cygqmn[0][gJ9EdW3z1];
                gJ9EdW3z1 = gJ9EdW3z1 + 1;
            };
        }
        else {
            if (!(1 != SMHAtG)) {
                for (int gJ9EdW3z1 = 0;
                gJ9EdW3z1 != VS0MiXw9y; gJ9EdW3z1 = gJ9EdW3z1 + 1)
                    BE6NoDJp3z = BE6NoDJp3z +EwZ3Cygqmn[gJ9EdW3z1][0];
            }
            else {
                for (int gJ9EdW3z1 = 0;
                gJ9EdW3z1 != SMHAtG -1; gJ9EdW3z1++)
                    BE6NoDJp3z += EwZ3Cygqmn[0][gJ9EdW3z1];
                for (int gJ9EdW3z1 = 0;
                gJ9EdW3z1 != VS0MiXw9y -1; gJ9EdW3z1++)
                    BE6NoDJp3z += EwZ3Cygqmn[gJ9EdW3z1][SMHAtG -1];
                for (int gJ9EdW3z1 = SMHAtG -1;
                gJ9EdW3z1 != 0; gJ9EdW3z1 = gJ9EdW3z1 - 1)
                    BE6NoDJp3z = BE6NoDJp3z +EwZ3Cygqmn[VS0MiXw9y -1][gJ9EdW3z1];
                for (int gJ9EdW3z1 = VS0MiXw9y -1;
                gJ9EdW3z1 != 0; gJ9EdW3z1--)
                    BE6NoDJp3z = BE6NoDJp3z +EwZ3Cygqmn[gJ9EdW3z1][0];
            };
        }
        cout << BE6NoDJp3z << endl;
    }
    return 0;
}

