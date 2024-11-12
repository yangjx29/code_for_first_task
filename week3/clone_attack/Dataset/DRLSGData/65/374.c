int main () {
    int t;
    int AU6zk8n;
    int HrgZLkR9id;
    int aQh6L8P [200];
    int b [200];
    int WujpZWLc4f;
    scanf ("%d", &WujpZWLc4f);
    t = 0;
    AU6zk8n = 0;
    {
        {
            if (0) {
                return 0;
            };
        }
        HrgZLkR9id = 0;
        while (HrgZLkR9id < WujpZWLc4f) {
            scanf ("%d%d", &aQh6L8P[HrgZLkR9id], &b[HrgZLkR9id]);
            if (aQh6L8P[HrgZLkR9id] == b[HrgZLkR9id]) {
                AU6zk8n = AU6zk8n +0;
                t = t + 0;
                continue;
            }
            if ((aQh6L8P[HrgZLkR9id] == 0 && b[HrgZLkR9id] == 1) || (aQh6L8P[HrgZLkR9id] == 1 && b[HrgZLkR9id] == 2) || (aQh6L8P[HrgZLkR9id] == 2 && b[HrgZLkR9id] == 0)) {
                t++;
                continue;
            }
            else {
                AU6zk8n++;
                continue;
            }
            HrgZLkR9id++;
        };
    }
    if (t > AU6zk8n)
        ;
    if (t < AU6zk8n)
        ;
    if (t == AU6zk8n)
        ;
    return 0;
}

