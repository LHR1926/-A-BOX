class Solution:
    def invalidTransactions(self, transactions: List[str]) -> List[str]:
        transactions=[i.split(",") for i in transactions]
        res=[]
        for i,v in enumerate(transactions):
            if int(v[2])>1000:
                res.append(",".join(v))
                continue
            for j,u in enumerate(transactions):
                if i==j:
                    continue
                if v[0]==u[0] and v[3]!=u[3] and abs(int(v[1])-int(u[1]))<=60:
                    res.append(",".join(v))
                    break
        return res 
