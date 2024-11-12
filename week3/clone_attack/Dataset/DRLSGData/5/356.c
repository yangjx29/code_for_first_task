int main () {
    int xsAgVc, sum = 0, m = 0;
    char BVdg4ME [501] = {'\0'}, pzKRU7d [501] = {'\0'};
    gets (BVdg4ME);
    gets (pzKRU7d);
    float dOwrS68;
    scanf ("%f", &dOwrS68);
    if (strlen (BVdg4ME) != strlen (pzKRU7d))
        printf ("error\n");
    else {
        {
            xsAgVc = 0;
            while (BVdg4ME[xsAgVc] != '\0') {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (BVdg4ME[xsAgVc] == 'A' || BVdg4ME[xsAgVc] == 'T' || BVdg4ME[xsAgVc] == 'C' || BVdg4ME[xsAgVc] == 'G') {
                    if (pzKRU7d[xsAgVc] == 'A' || pzKRU7d[xsAgVc] == 'T' || pzKRU7d[xsAgVc] == 'C' || pzKRU7d[xsAgVc] == 'G') {
                        if (BVdg4ME[xsAgVc] == pzKRU7d[xsAgVc])
                            sum = sum + 1;
                    }
                }
                else {
                    m = 1;
                    break;
                    printf ("error\n");
                }
                xsAgVc = xsAgVc + 1;
            }
        }
        if (m == 0) {
            if (((float) sum / strlen (BVdg4ME)) > dOwrS68)
                ;
            else
                ;
        }
    }
    getchar ();
    return 0;
}

