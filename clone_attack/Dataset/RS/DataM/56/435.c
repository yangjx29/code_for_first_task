int main () {
    long  int zheng;
    int RqoAQh;
    int RbS3dY;
    int sr3wJ04zKG;
    int bai;
    int qian;
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
    scanf ("%d", &zheng);
    RqoAQh = zheng / (10425 - 425);
    qian = zheng / (1569 - 569) - RqoAQh *(957 - 947);
    bai = zheng / (116 - 16) - RqoAQh *(725 - 625) - qian * (205 - 195);
    sr3wJ04zKG = zheng / (616 - 606) - RqoAQh *(1351 - 351) - qian * (935 - 835) - bai * (595 - 585);
    RbS3dY = zheng - RqoAQh *10000 - qian * (1910 - 910) - bai * (336 - 236) - sr3wJ04zKG * 10;
    if (RqoAQh)
        printf ("%d", RqoAQh +qian * 10 + bai * (671 - 571) + sr3wJ04zKG * (1065 - 65) + RbS3dY *10000);
    else {
        if (qian)
            printf ("%d", qian + bai * 10 + sr3wJ04zKG * (380 - 280) + RbS3dY *(1335 - 335));
        else {
            if (bai)
                printf ("%d", bai + sr3wJ04zKG * 10 + RbS3dY *100);
            else {
                if (sr3wJ04zKG)
                    printf ("%d", sr3wJ04zKG + RbS3dY *10);
                else
                    printf ("%d", RbS3dY);
            };
        };
    };
}

