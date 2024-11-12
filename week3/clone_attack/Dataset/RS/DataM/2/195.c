int pELidrDhUR;
int prYaMSnA8K [(2644 - 631)], D43d5r [1222];
char cpRmuwbB [(2134 - 121)] [(75 - 47)];

double  Max (double  u2R4qaxQ0, double  gvuk8tqN) {
    return gvuk8tqN < u2R4qaxQ0 ? u2R4qaxQ0 : gvuk8tqN;
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
}

int main () {
    int Max;
    int sKtOne;
    Max = (458 - 458);
    cin >> pELidrDhUR;
    for (int I = (269 - 268);
    I <= pELidrDhUR; I++)
        cin >> prYaMSnA8K[I] >> cpRmuwbB[I];
    {
        int I;
        I = 1;
        while (I <= pELidrDhUR) {
            int vjYRp6yhNA7;
            vjYRp6yhNA7 = strlen (cpRmuwbB[I]);
            {
                int YLmXd2wAa9Zj = (234 - 234);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (YLmXd2wAa9Zj < vjYRp6yhNA7) {
                    D43d5r[cpRmuwbB[I][YLmXd2wAa9Zj]]++;
                    YLmXd2wAa9Zj++;
                };
            }
            I++;
        };
    }
    {
        int I = 65;
        while ('Z' >= I) {
            if (D43d5r[I] > Max) {
                Max = D43d5r[I];
                sKtOne = I;
            }
            I++;
        };
    }
    printf ("%c\n%d\n", sKtOne, Max);
    {
        int I = 1;
        while (I <= pELidrDhUR) {
            int vjYRp6yhNA7 = strlen (cpRmuwbB[I]);
            {
                int YLmXd2wAa9Zj = (25 - 25);
                while (YLmXd2wAa9Zj < vjYRp6yhNA7) {
                    if (cpRmuwbB[I][YLmXd2wAa9Zj] == sKtOne)
                        cout << prYaMSnA8K[I] << endl;
                    YLmXd2wAa9Zj++;
                };
            }
            I++;
        };
    };
}

