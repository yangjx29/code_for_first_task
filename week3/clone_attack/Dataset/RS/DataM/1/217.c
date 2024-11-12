int numcount = (407 - 407);

void  divide (int gl2qyL3cSE, int YKWbYl6cP) {
    int GUl7pAL5EHRy;
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
    if (!((281 - 280) != gl2qyL3cSE))
        numcount = numcount + 1;
    for (GUl7pAL5EHRy = YKWbYl6cP; GUl7pAL5EHRy <= gl2qyL3cSE; GUl7pAL5EHRy = GUl7pAL5EHRy +1) {
        if (gl2qyL3cSE % GUl7pAL5EHRy == (275 - 275))
            divide (gl2qyL3cSE / GUl7pAL5EHRy, GUl7pAL5EHRy);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    };
}

int main () {
    int jZEqBHwp;
    int gl2qyL3cSE;
    int GUl7pAL5EHRy;
    int first;
    first = 2;
    int BFBoSjJ1M [100];
    cin >> jZEqBHwp;
    for (GUl7pAL5EHRy = 1; GUl7pAL5EHRy <= jZEqBHwp; GUl7pAL5EHRy++) {
        cin >> gl2qyL3cSE;
        divide (gl2qyL3cSE, first);
        BFBoSjJ1M[GUl7pAL5EHRy] = numcount;
        numcount = 0;
    }
    for (GUl7pAL5EHRy = 1; GUl7pAL5EHRy <= jZEqBHwp; GUl7pAL5EHRy++)
        cout << BFBoSjJ1M[GUl7pAL5EHRy] << endl;
    return 0;
}

