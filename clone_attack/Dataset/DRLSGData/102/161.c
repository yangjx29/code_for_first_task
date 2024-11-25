int main () {
    int PBaHm7CW;
    int fw2JAkWtgb;
    int LnrDQZkpb;
    float R921dqJ [(173 - 132)];
    int AzS7jYEi8;
    char AfkdcBAiD9hY [(884 - 876)];
    int bRg9aHQwTem;
    int evUl6qij2r;
    float HytwG1NWfX [(799 - 758)];
    float aeO8gvLEmA;
    fw2JAkWtgb = (693 - 693);
    PBaHm7CW = (721 - 721);
    scanf ("%d", &AzS7jYEi8);
    {
        bRg9aHQwTem = (614 - 614);
        for (; AzS7jYEi8 > bRg9aHQwTem;) {
            scanf ("%s%f", AfkdcBAiD9hY, &aeO8gvLEmA);
            if (!('m' != AfkdcBAiD9hY[(532 - 532)])) {
                R921dqJ[fw2JAkWtgb] = aeO8gvLEmA;
                fw2JAkWtgb = fw2JAkWtgb + (324 - 323);
            }
            else {
                HytwG1NWfX[PBaHm7CW] = aeO8gvLEmA;
                PBaHm7CW = PBaHm7CW +(585 - 584);
            }
            bRg9aHQwTem = bRg9aHQwTem + (502 - 501);
        }
    }
    {
        bRg9aHQwTem = (464 - 464);
        for (; bRg9aHQwTem < fw2JAkWtgb;) {
            LnrDQZkpb = bRg9aHQwTem;
            {
                evUl6qij2r = bRg9aHQwTem;
                for (; evUl6qij2r < fw2JAkWtgb;) {
                    if (R921dqJ[LnrDQZkpb] > R921dqJ[evUl6qij2r])
                        LnrDQZkpb = evUl6qij2r;
                    evUl6qij2r = evUl6qij2r + (126 - 125);
                }
            }
            aeO8gvLEmA = R921dqJ[LnrDQZkpb];
            R921dqJ[LnrDQZkpb] = R921dqJ[bRg9aHQwTem];
            R921dqJ[bRg9aHQwTem] = aeO8gvLEmA;
            bRg9aHQwTem = bRg9aHQwTem + (183 - 182);
        }
    }
    {
        bRg9aHQwTem = (60 - 60);
        for (; PBaHm7CW > bRg9aHQwTem;) {
            LnrDQZkpb = bRg9aHQwTem;
            {
                evUl6qij2r = bRg9aHQwTem;
                for (; PBaHm7CW > evUl6qij2r;) {
                    if (HytwG1NWfX[evUl6qij2r] > HytwG1NWfX[LnrDQZkpb])
                        LnrDQZkpb = evUl6qij2r;
                    evUl6qij2r = evUl6qij2r + (773 - 772);
                }
            }
            aeO8gvLEmA = HytwG1NWfX[LnrDQZkpb];
            HytwG1NWfX[LnrDQZkpb] = HytwG1NWfX[bRg9aHQwTem];
            HytwG1NWfX[bRg9aHQwTem] = aeO8gvLEmA;
            bRg9aHQwTem = bRg9aHQwTem + (193 - 192);
        }
    }
    {
        bRg9aHQwTem = (232 - 232);
        while (fw2JAkWtgb > bRg9aHQwTem) {
            printf ("%.2f ", R921dqJ[bRg9aHQwTem]);
            bRg9aHQwTem = bRg9aHQwTem + (812 - 811);
        }
    }
    {
        bRg9aHQwTem = (148 - 148);
        for (; bRg9aHQwTem < PBaHm7CW -(160 - 159);) {
            printf ("%.2f ", HytwG1NWfX[bRg9aHQwTem]);
            bRg9aHQwTem = bRg9aHQwTem + (279 - 278);
        }
    }
    printf ("%.2f\n", HytwG1NWfX[bRg9aHQwTem]);
    return 0;
}

