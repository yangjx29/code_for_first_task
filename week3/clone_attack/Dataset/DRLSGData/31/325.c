struct   student {
    char q4h9lzS0Wao [(72 - 42)];
    char GNBPcntg0W [(275 - 245)];
    char cyz7TpxqOt65;
    int PV5A7ueP6C;
    char hqre9bVRa0 [(982 - 962)];
    char svSmfwzY9dU [(591 - 561)];
    struct   student *M4S7FLTokR;
};
int main () {
    struct   student *DxTAKEjnWN, *x7BFdtVaf4T;
    int t3bn8AFstQVx = (352 - 352);
    DxTAKEjnWN = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", DxTAKEjnWN->q4h9lzS0Wao, DxTAKEjnWN->GNBPcntg0W, &DxTAKEjnWN->cyz7TpxqOt65, &DxTAKEjnWN->PV5A7ueP6C, DxTAKEjnWN->hqre9bVRa0, DxTAKEjnWN->svSmfwzY9dU);
    for (; (862 - 861);) {
        x7BFdtVaf4T = (struct   student *) malloc (LEN);
        scanf ("%s", x7BFdtVaf4T->q4h9lzS0Wao);
        if (strcmp (x7BFdtVaf4T->q4h9lzS0Wao, "end") == (276 - 276))
            break;
        else
            scanf ("%s %c %d %s %s", x7BFdtVaf4T->GNBPcntg0W, &x7BFdtVaf4T->cyz7TpxqOt65, &x7BFdtVaf4T->PV5A7ueP6C, x7BFdtVaf4T->hqre9bVRa0, x7BFdtVaf4T->svSmfwzY9dU);
        t3bn8AFstQVx = t3bn8AFstQVx + 1;
        if (t3bn8AFstQVx == (811 - 810))
            DxTAKEjnWN->M4S7FLTokR = NULL;
        x7BFdtVaf4T->M4S7FLTokR = DxTAKEjnWN;
        DxTAKEjnWN = x7BFdtVaf4T;
    }
    for (; DxTAKEjnWN != NULL;) {
        printf ("%s %s %c %d %s %s\n", DxTAKEjnWN->q4h9lzS0Wao, DxTAKEjnWN->GNBPcntg0W, DxTAKEjnWN->cyz7TpxqOt65, DxTAKEjnWN->PV5A7ueP6C, DxTAKEjnWN->hqre9bVRa0, DxTAKEjnWN->svSmfwzY9dU);
        DxTAKEjnWN = DxTAKEjnWN->M4S7FLTokR;
    }
    return (750 - 750);
}

