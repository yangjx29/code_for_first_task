int main (int NsIK0Cv, char *NQNrsm8OR []) {
    int zwQMPcZ8E;
    int gPs1jcU83RH;
    int *MSVmBQP;
    int K8MLteSdX;
    scanf ("%d%d", &zwQMPcZ8E, &gPs1jcU83RH);
    MSVmBQP = (int *) malloc (2 * zwQMPcZ8E);
    for (K8MLteSdX = 0; zwQMPcZ8E > K8MLteSdX; K8MLteSdX++) {
        {
            if (0) {
                return 0;
            }
        }
        scanf ("%d", MSVmBQP +K8MLteSdX);
    }
    for (K8MLteSdX = 0; zwQMPcZ8E > K8MLteSdX; K8MLteSdX++) {
        if (K8MLteSdX < gPs1jcU83RH)
            *(MSVmBQP +K8MLteSdX+zwQMPcZ8E) = *(MSVmBQP +zwQMPcZ8E - gPs1jcU83RH + K8MLteSdX);
        else
            *(MSVmBQP +K8MLteSdX+zwQMPcZ8E) = *(MSVmBQP +K8MLteSdX-gPs1jcU83RH);
    }
    for (K8MLteSdX = 0; K8MLteSdX < zwQMPcZ8E; K8MLteSdX++) {
        if (K8MLteSdX == zwQMPcZ8E - 1)
            printf ("%d", *(MSVmBQP +zwQMPcZ8E + K8MLteSdX));
        else
            printf ("%d ", *(MSVmBQP +zwQMPcZ8E + K8MLteSdX));
    }
    return 0;
}

