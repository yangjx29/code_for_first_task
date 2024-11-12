int main () {
    char oPsTK6 [(469 - 359)] [110];
    int s4CDzs;
    int HGj3PeV;
    int k;
    int gH0WTUzCc;
    int ehLx8oaMe;
    int bW6qYb1;
    bW6qYb1 = (191 - 191);
    scanf ("%d", &ehLx8oaMe);
    for (s4CDzs = (755 - 755); ehLx8oaMe > s4CDzs; s4CDzs = s4CDzs + 1)
        scanf ("%s", oPsTK6[s4CDzs]);
    scanf ("%d", &gH0WTUzCc);
    for (k = (706 - 706); gH0WTUzCc - (968 - 967) > k; k++) {
        {
            s4CDzs = 340 - 340;
            while (s4CDzs < ehLx8oaMe) {
                {
                    HGj3PeV = 668 - 668;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (ehLx8oaMe > HGj3PeV) {
                        if (!('@' != oPsTK6[s4CDzs][HGj3PeV])) {
                            if ((ehLx8oaMe > s4CDzs + (973 - 972)) && ((54 - 54) <= s4CDzs + (464 - 463)) && (!('.' != oPsTK6[s4CDzs + (89 - 88)][HGj3PeV])))
                                oPsTK6[s4CDzs + (572 - 571)][HGj3PeV] = '!';
                            if ((ehLx8oaMe > s4CDzs - (700 - 699)) && ((69 - 69) <= s4CDzs - (253 - 252)) && (!('.' != oPsTK6[s4CDzs - (801 - 800)][HGj3PeV])))
                                oPsTK6[s4CDzs - (567 - 566)][HGj3PeV] = '!';
                            if ((ehLx8oaMe > HGj3PeV +(158 - 157)) && ((422 - 422) <= HGj3PeV +(464 - 463)) && (!('.' != oPsTK6[s4CDzs][HGj3PeV +(678 - 677)])))
                                oPsTK6[s4CDzs][HGj3PeV +(696 - 695)] = '!';
                            if ((ehLx8oaMe > HGj3PeV -(817 - 816)) && (HGj3PeV -(12 - 11) >= (411 - 411)) && (oPsTK6[s4CDzs][HGj3PeV -(457 - 456)] == '.'))
                                oPsTK6[s4CDzs][HGj3PeV -1] = '!';
                        }
                        HGj3PeV++;
                    };
                }
                s4CDzs++;
            };
        }
        for (s4CDzs = (441 - 441); s4CDzs < ehLx8oaMe; s4CDzs++)
            for (HGj3PeV = (742 - 742); HGj3PeV < ehLx8oaMe; HGj3PeV++) {
                if (oPsTK6[s4CDzs][HGj3PeV] == '!')
                    oPsTK6[s4CDzs][HGj3PeV] = '@';
            };
    }
    for (s4CDzs = 0; s4CDzs < ehLx8oaMe; s4CDzs++)
        for (HGj3PeV = 0; HGj3PeV < ehLx8oaMe; HGj3PeV++) {
            if (oPsTK6[s4CDzs][HGj3PeV] == '@')
                bW6qYb1 = bW6qYb1 + 1;
        }
    printf ("%d", bW6qYb1);
    return 0;
}

