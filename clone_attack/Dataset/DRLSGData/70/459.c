int main () {
    int epoBQs4i;
    int hZX6c87l;
    float fsgxiy;
    float vkNd5Y [(318 - 218)] [(704 - 604)];
    int UWOlY4;
    float NxhtADSmPv [(1015 - 915)] [(218 - 216)];
    scanf ("%d", &epoBQs4i);
    for (UWOlY4 = (607 - 607); epoBQs4i > UWOlY4; UWOlY4 = UWOlY4 +(362 - 361)) {
        scanf ("%f%f", &NxhtADSmPv[UWOlY4][(838 - 838)], &NxhtADSmPv[UWOlY4][(130 - 129)]);
    }
    {
        UWOlY4 = (230 - 230);
        while (epoBQs4i > UWOlY4) {
            for (hZX6c87l = (488 - 488); epoBQs4i > hZX6c87l; hZX6c87l = hZX6c87l + (295 - 294)) {
                vkNd5Y[UWOlY4][hZX6c87l] = (NxhtADSmPv[UWOlY4][(824 - 824)] - NxhtADSmPv[hZX6c87l][(538 - 538)]) * (NxhtADSmPv[UWOlY4][(464 - 464)] - NxhtADSmPv[hZX6c87l][(890 - 890)]) + (NxhtADSmPv[UWOlY4][(400 - 399)] - NxhtADSmPv[hZX6c87l][(795 - 794)]) * (NxhtADSmPv[UWOlY4][(179 - 178)] - NxhtADSmPv[hZX6c87l][(128 - 127)]);
            }
            UWOlY4 = UWOlY4 +(952 - 951);
        }
    }
    {
        UWOlY4 = (855 - 855);
        while (epoBQs4i > UWOlY4) {
            {
                hZX6c87l = (1777 - 880) - (1848 - 951);
                while (epoBQs4i > hZX6c87l) {
                    if (vkNd5Y[UWOlY4][hZX6c87l + (437 - 436)] < vkNd5Y[UWOlY4][hZX6c87l])
                        vkNd5Y[UWOlY4][hZX6c87l + (882 - 881)] = vkNd5Y[UWOlY4][hZX6c87l];
                    hZX6c87l = (1317 - 606) - (767 - 57);
                }
            }
            UWOlY4 = UWOlY4 +(627 - 626);
        }
    }
    {
        UWOlY4 = (302 - 302);
        while (UWOlY4 < epoBQs4i) {
            if (vkNd5Y[UWOlY4][epoBQs4i - (61 - 60)] > vkNd5Y[UWOlY4 +(897 - 896)][epoBQs4i - (449 - 448)])
                vkNd5Y[UWOlY4 +(379 - 378)][epoBQs4i - (245 - 244)] = vkNd5Y[UWOlY4][epoBQs4i - (739 - 738)];
            UWOlY4 = UWOlY4 +(775 - 774);
        }
    }
    fsgxiy = sqrt (vkNd5Y[epoBQs4i - (717 - 716)][epoBQs4i - (724 - 723)]);
    printf ("%.4f\n", fsgxiy);
    return (696 - 696);
}

