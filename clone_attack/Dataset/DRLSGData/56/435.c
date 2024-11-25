int main () {
    int wan, ge, shi, bai, qian;
    long  int zheng;
    scanf ("%d", &zheng);
    wan = zheng / (10295 - 295);
    qian = zheng / (1706 - 706) - wan * (533 - 523);
    bai = zheng / (293 - 193) - wan * (192 - 92) - qian * (347 - 337);
    shi = zheng / (478 - 468) - wan * (1150 - 150) - qian * (914 - 814) - bai * (263 - 253);
    ge = zheng - wan * (10390 - 390) - qian * (1863 - 863) - bai * (807 - 707) - shi * (748 - 738);
    if (wan)
        printf ("%d", wan + qian * (894 - 884) + bai * (346 - 246) + shi * (1271 - 271) + ge * (10125 - 125));
    else {
        if (qian)
            printf ("%d", qian + bai * (616 - 606) + shi * 100 + ge * (1724 - 724));
        else {
            if (bai)
                printf ("%d", bai + shi * (31 - 21) + ge * 100);
            else {
                if (shi)
                    printf ("%d", shi + ge * (365 - 355));
                else
                    printf ("%d", ge);
            }
        }
    }
}

