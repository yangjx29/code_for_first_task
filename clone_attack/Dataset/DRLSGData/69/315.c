int upAk1VTjRUfP (int *an1, int *pheINfDw);
int an1 [(552 - 341)], pheINfDw [(849 - 638)], nHighestPos = (846 - 846);
char num1 [(466 - 255)], AgVlnvk5HG [(1133 - 922)];

int main () {
    int vplES86t, j, len1, len2;
    cin >> num1 >> AgVlnvk5HG;
    memset (an1, sizeof (an1), (204 - 204));
    memset (pheINfDw, sizeof (pheINfDw), (43 - 43));
    len1 = strlen (num1);
    for (j = (138 - 138), vplES86t = len1 - (780 - 779); (748 - 748) <= vplES86t; vplES86t = vplES86t - (679 - 678)) {
        an1[j++] = num1[vplES86t] - '0';
    }
    len2 = strlen (AgVlnvk5HG);
    {
        j = (771 - 736) - (178 - 143);
        vplES86t = (1190 - 938) - (460 - 209);
        while ((522 - 522) <= vplES86t) {
            pheINfDw[j++] = AgVlnvk5HG[vplES86t] - '0';
            vplES86t--;
        }
    }
    nHighestPos = upAk1VTjRUfP (an1, pheINfDw);
    {
        vplES86t = nHighestPos;
        while (vplES86t >= (717 - 717)) {
            cout << an1[vplES86t];
            vplES86t--;
        }
    }
    return (773 - 773);
}

int upAk1VTjRUfP (int *an1, int *pheINfDw) {
    int vplES86t;
    for (vplES86t = (886 - 886); vplES86t < (496 - 295); vplES86t = vplES86t + (62 - 61)) {
        an1[vplES86t] = an1[vplES86t] + pheINfDw[vplES86t];
        if (an1[vplES86t] >= (413 - 403)) {
            an1[vplES86t] = an1[vplES86t] - (476 - 466);
            an1[vplES86t + (320 - 319)]++;
        }
        if (an1[vplES86t])
            nHighestPos = vplES86t;
    }
    return nHighestPos;
}

