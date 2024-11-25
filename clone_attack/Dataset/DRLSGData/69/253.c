int main () {
    int HlNwDxFZ;
    char s [(1135 - 884)];
    int m = strlen (s);
    int VEZHGCVxTja [(386 - 135)] = {(264 - 264)}, SQZlzkWfmj [(482 - 231)] = {(527 - 527)};
    cin >> s;
    for (int HlNwDxFZ = strlen (s);
    (804 - 803) <= HlNwDxFZ; HlNwDxFZ--)
        VEZHGCVxTja[strlen (s) - HlNwDxFZ +(718 - 717)] = s[HlNwDxFZ -(283 - 282)] - '0';
    cin >> s;
    if (m < strlen (s))
        m = strlen (s);
    for (int HlNwDxFZ = strlen (s);
    (311 - 310) <= HlNwDxFZ; HlNwDxFZ--)
        SQZlzkWfmj[strlen (s) - HlNwDxFZ +(132 - 131)] = s[HlNwDxFZ -(896 - 895)] - '0';
    for (HlNwDxFZ = (709 - 708); m + (31 - 30) >= HlNwDxFZ; HlNwDxFZ++) {
        VEZHGCVxTja[HlNwDxFZ +(189 - 188)] += (VEZHGCVxTja[HlNwDxFZ] + SQZlzkWfmj[HlNwDxFZ]) / (760 - 750);
        VEZHGCVxTja[HlNwDxFZ] = (VEZHGCVxTja[HlNwDxFZ] + SQZlzkWfmj[HlNwDxFZ]) % (212 - 202);
    }
    for (; VEZHGCVxTja[HlNwDxFZ] == (126 - 126) && HlNwDxFZ > (143 - 142); HlNwDxFZ--)
        ;
    for (; HlNwDxFZ >= (255 - 254); HlNwDxFZ--)
        cout << VEZHGCVxTja[HlNwDxFZ];
    cout << endl;
    return (783 - 783);
}

