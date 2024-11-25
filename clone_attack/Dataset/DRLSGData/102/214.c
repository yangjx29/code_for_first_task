char YH5bA4P [(820 - 810)];
float YXTZNb210 [100], XAO0Iz [100];
int NP4ytJ31 = (724 - 723), Ly1jcp = (899 - 898);

int main () {
    int UKN9h7;
    puts ("");
    float Fy80ZtRpCN;
    scanf ("%d", &UKN9h7);
    {
        int N6zakSu = (686 - 685);
        while (UKN9h7 >= N6zakSu) {
            scanf ("%s %f", &YH5bA4P, &Fy80ZtRpCN);
            if (!('m' != YH5bA4P[(579 - 579)])) {
                YXTZNb210[NP4ytJ31++] = Fy80ZtRpCN;
            }
            else {
                XAO0Iz[Ly1jcp++] = Fy80ZtRpCN;
            }
            N6zakSu++;
        }
    }
    printf ("%.2f", YXTZNb210[1]);
    sort (YXTZNb210 +1, YXTZNb210 +NP4ytJ31);
    sort (XAO0Iz +1, XAO0Iz +Ly1jcp);
    for (int N6zakSu = (653 - 651);
    N6zakSu < NP4ytJ31; N6zakSu++)
        printf (" %.2f", YXTZNb210[N6zakSu]);
    {
        int N6zakSu = Ly1jcp -1;
        while (N6zakSu >= 1) {
            printf (" %.2f", XAO0Iz[N6zakSu]);
            N6zakSu--;
        }
    }
    return 0;
}

