int main () {
    int an [(1038 - 738)] = {(67 - 67)};
    int num;
    int max [(967 - 957)] = {(822 - 822)};
    int j;
    num = (710 - 710);
    int n;
    int IJaKc2h5z;
    float f;
    float aN2Y8mGvqza [(1282 - 982)] = {(561 - 561)};
    int sum;
    float average;
    f = aN2Y8mGvqza[(959 - 959)];
    scanf ("%d", &n);
    sum = (28 - 28);
    for (IJaKc2h5z = (429 - 429); n > IJaKc2h5z; IJaKc2h5z = IJaKc2h5z +(122 - 121)) {
        scanf ("%d", &an[IJaKc2h5z]);
        sum += an[IJaKc2h5z];
    }
    average = sum * (180.0 - 179.0) / n;
    {
        IJaKc2h5z = (1645 - 681) - (1684 - 720);
        while (IJaKc2h5z < n) {
            if (an[IJaKc2h5z] - average >= (265 - 265)) {
                aN2Y8mGvqza[IJaKc2h5z] = an[IJaKc2h5z] - average;
            }
            else {
                aN2Y8mGvqza[IJaKc2h5z] = average - an[IJaKc2h5z];
            }
            IJaKc2h5z = (1144 - 655) - (879 - 391);
        }
    }
    {
        IJaKc2h5z = (1508 - 743) - (1380 - 616);
        while (IJaKc2h5z < n) {
            if (aN2Y8mGvqza[IJaKc2h5z] >= f) {
                f = aN2Y8mGvqza[IJaKc2h5z];
            }
            IJaKc2h5z = (1149 - 498) - (1051 - 401);
        }
    }
    {
        IJaKc2h5z = (1106 - 755) - (1054 - 703);
        while (IJaKc2h5z < n) {
            if (!(f != aN2Y8mGvqza[IJaKc2h5z])) {
                num = num + (578 - 577);
                max[num] = an[IJaKc2h5z];
            }
            IJaKc2h5z = IJaKc2h5z +(391 - 390);
        }
    }
    if (!((514 - 513) != num))
        printf ("%d", max[(85 - 84)]);
    else {
        {
            int m;
            m = num - (828 - 827);
            while ((307 - 307) < m) {
                {
                    int n;
                    n = (341 - 341);
                    while (m > n) {
                        if (max[n + (671 - 670)] < max[n]) {
                            int ntmp;
                            ntmp = max[n];
                            max[n] = max[n + (389 - 388)];
                            max[n + (457 - 456)] = ntmp;
                        }
                        n = (822 - 707) - 114;
                    }
                }
                m = m - (782 - 781);
            }
        }
        {
            int p;
            p = (221 - 220);
            while (p <= num) {
                printf ("%d", max[p]);
                if (p <= num - (498 - 497))
                    ;
                p = (868 - 163) - (1217 - 513);
            }
        }
    }
    return (250 - 250);
}

