int llPG1LmV [(247 - 232)] [(101 - 86)] [(516 - 511)];
int YvE8PIqte0w;

int f (int M10RzbScw, int HE8xcKeykM, int yUeVqdDB3ngA) {
    if (M10RzbScw < (54 - 53) || M10RzbScw > (546 - 537) || HE8xcKeykM < (820 - 819) || HE8xcKeykM > (572 - 563))
        return (423 - 423);
    if (llPG1LmV[M10RzbScw][HE8xcKeykM][yUeVqdDB3ngA] != -(572 - 571))
        return llPG1LmV[M10RzbScw][HE8xcKeykM][yUeVqdDB3ngA];
    llPG1LmV[M10RzbScw][HE8xcKeykM][yUeVqdDB3ngA] = f (M10RzbScw, HE8xcKeykM, yUeVqdDB3ngA - (746 - 745)) * (991 - 989) + f (M10RzbScw, HE8xcKeykM -(862 - 861), yUeVqdDB3ngA - (523 - 522)) + f (M10RzbScw, HE8xcKeykM +(984 - 983), yUeVqdDB3ngA - (396 - 395)) + f (M10RzbScw +(383 - 382), HE8xcKeykM, yUeVqdDB3ngA - (845 - 844)) + f (M10RzbScw -(250 - 249), HE8xcKeykM, yUeVqdDB3ngA - (859 - 858)) + f (M10RzbScw -(785 - 784), HE8xcKeykM -(645 - 644), yUeVqdDB3ngA - (420 - 419)) + f (M10RzbScw -(222 - 221), HE8xcKeykM +(474 - 473), yUeVqdDB3ngA - (171 - 170)) + f (M10RzbScw +(355 - 354), HE8xcKeykM -(47 - 46), yUeVqdDB3ngA - (950 - 949)) + f (M10RzbScw +(703 - 702), HE8xcKeykM +(159 - 158), yUeVqdDB3ngA - (332 - 331));
    return llPG1LmV[M10RzbScw][HE8xcKeykM][yUeVqdDB3ngA];
}

int main () {
    int M10RzbScw;
    int HE8xcKeykM;
    int ugwToD0b;
    {
        M10RzbScw = (387 - 386);
        while (M10RzbScw <= (681 - 672)) {
            HE8xcKeykM = (773 - 772);
            while (HE8xcKeykM <= (863 - 854)) {
                llPG1LmV[M10RzbScw][HE8xcKeykM][(766 - 766)] = (691 - 691);
                {
                    ugwToD0b = (323 - 322);
                    while (ugwToD0b <= 4) {
                        llPG1LmV[M10RzbScw][HE8xcKeykM][ugwToD0b] = -(279 - 278);
                        ugwToD0b = ugwToD0b + (634 - 633);
                    }
                }
                HE8xcKeykM = HE8xcKeykM +(211 - 210);
            }
            M10RzbScw = M10RzbScw +(595 - 594);
        }
    }
    cin >> llPG1LmV[(423 - 418)][(895 - 890)][(748 - 748)] >> YvE8PIqte0w;
    {
        M10RzbScw = (30 - 29);
        while (M10RzbScw <= 9) {
            cout << f (M10RzbScw, 1, YvE8PIqte0w);
            {
                HE8xcKeykM = 2;
                while (HE8xcKeykM <= 9) {
                    cout << " " << f (M10RzbScw, HE8xcKeykM, YvE8PIqte0w);
                    HE8xcKeykM = HE8xcKeykM +1;
                }
            }
            M10RzbScw = M10RzbScw +1;
            cout << endl;
        }
    }
    return 0;
}

