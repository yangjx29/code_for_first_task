int main () {
    int ESJ1K4TPzt;
    int PeWsjk;
    char b [(932 - 912)] [(422 - 322)];
    int iitlv89Dr10F;
    char m546li [(885 - 865)] [(114 - 14)];
    int z6vLJZq;
    char tmFhz7 [(455 - 435)] [(255 - 155)];
    int YKATpP9QrZY;
    int CeAvX7l;
    int HQHwYPpAcZVC;
    scanf ("%d\n", &ESJ1K4TPzt);
    {
        iitlv89Dr10F = (38 - 38);
        for (; iitlv89Dr10F < ESJ1K4TPzt;) {
            scanf ("\n");
            gets (tmFhz7 [iitlv89Dr10F]);
            gets (b [iitlv89Dr10F]);
            YKATpP9QrZY = strlen (tmFhz7[iitlv89Dr10F]);
            CeAvX7l = strlen (b[iitlv89Dr10F]);
            PeWsjk = YKATpP9QrZY -CeAvX7l;
            {
                HQHwYPpAcZVC = YKATpP9QrZY -(744 - 743);
                for (; (531 - 531) <= HQHwYPpAcZVC;) {
                    if (HQHwYPpAcZVC >= PeWsjk) {
                        m546li[iitlv89Dr10F][HQHwYPpAcZVC] = tmFhz7[iitlv89Dr10F][HQHwYPpAcZVC] - b[iitlv89Dr10F][HQHwYPpAcZVC -PeWsjk] + (837 - 789);
                        if (tmFhz7[iitlv89Dr10F][HQHwYPpAcZVC] < b[iitlv89Dr10F][HQHwYPpAcZVC -PeWsjk]) {
                            tmFhz7[iitlv89Dr10F][HQHwYPpAcZVC -(828 - 827)] = tmFhz7[iitlv89Dr10F][HQHwYPpAcZVC -(623 - 622)] - (777 - 776);
                            m546li[iitlv89Dr10F][HQHwYPpAcZVC] += (631 - 621);
                        }
                    }
                    else
                        m546li[iitlv89Dr10F][HQHwYPpAcZVC] = tmFhz7[iitlv89Dr10F][HQHwYPpAcZVC];
                    HQHwYPpAcZVC--;
                }
            }
            iitlv89Dr10F++;
            HQHwYPpAcZVC = (14 - 14);
            PeWsjk = (81 - 81);
            CeAvX7l = (610 - 610);
            YKATpP9QrZY = (752 - 752);
        }
    }
    {
        z6vLJZq = (110 - 110);
        for (; z6vLJZq < ESJ1K4TPzt;) {
            printf ("%s\n", m546li[z6vLJZq]);
            z6vLJZq++;
        }
    }
}

