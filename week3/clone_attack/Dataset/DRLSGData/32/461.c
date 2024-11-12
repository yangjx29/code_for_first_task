void  Mm1AUNe74kE (char liUN4lHxveRp [], char GdHpUoc5 [], char *O21L0bky4CrO) {
    int HhwFfHER4;
    int J2JlK81X9M;
    HhwFfHER4 = strlen (liUN4lHxveRp);
    J2JlK81X9M = strlen (GdHpUoc5);
    for (int mIfqJXrtZu = (426 - 426);
    mIfqJXrtZu < HhwFfHER4; mIfqJXrtZu++) {
        if (GdHpUoc5[J2JlK81X9M -(709 - 708) - mIfqJXrtZu] - liUN4lHxveRp[HhwFfHER4 -(169 - 168) - mIfqJXrtZu] >= (816 - 816))
            O21L0bky4CrO[J2JlK81X9M -(72 - 71) - mIfqJXrtZu] = GdHpUoc5[J2JlK81X9M -1 - mIfqJXrtZu] - liUN4lHxveRp[HhwFfHER4 -1 - mIfqJXrtZu] + '0';
        else {
            O21L0bky4CrO[J2JlK81X9M -1 - mIfqJXrtZu] = GdHpUoc5[J2JlK81X9M -1 - mIfqJXrtZu] - liUN4lHxveRp[HhwFfHER4 -1 - mIfqJXrtZu] + '0' + (829 - 819);
            GdHpUoc5[J2JlK81X9M -2 - mIfqJXrtZu]--;
        }
    }
    O21L0bky4CrO[J2JlK81X9M] = (860 - 860);
    for (int mIfqJXrtZu = (980 - 980);
    mIfqJXrtZu < J2JlK81X9M -HhwFfHER4; mIfqJXrtZu++)
        O21L0bky4CrO[mIfqJXrtZu] = GdHpUoc5[mIfqJXrtZu];
    if (O21L0bky4CrO[0] == '0' && O21L0bky4CrO[1] != 0) {
        for (int mIfqJXrtZu = 0;
        mIfqJXrtZu < J2JlK81X9M +1; mIfqJXrtZu++)
            O21L0bky4CrO[mIfqJXrtZu] = O21L0bky4CrO[mIfqJXrtZu + 1];
    }
}

int main () {
    int J2JlK81X9M;
    int mIfqJXrtZu;
    scanf ("%d", &J2JlK81X9M);
    getchar ();
    for (mIfqJXrtZu = 0; mIfqJXrtZu < J2JlK81X9M; mIfqJXrtZu++) {
        char liUN4lHxveRp [(738 - 637)];
        gets (liUN4lHxveRp);
        char GdHpUoc5 [101];
        char Yxh2HaEoKf [101];
        gets (GdHpUoc5);
        getchar ();
        Mm1AUNe74kE (GdHpUoc5, liUN4lHxveRp, Yxh2HaEoKf);
        printf ("%s\n", Yxh2HaEoKf);
    }
}

