#define ll long long int
class ATM {
public:
    ll min(ll a,ll b){
        return a>b?b:a;
    }
    ATM() {
        
    }
    vector<ll>banknotes{0,0,0,0,0};

    void deposit(vector<int> banknotesCount) {
    for(int i=0;i<banknotesCount.size();i++)      
        banknotes[i]+=banknotesCount[i];
    }

    vector<int> withdraw(int amount) {
        vector<int>notes;
        notes.push_back(20);
        notes.push_back(50);
        notes.push_back(100);
        notes.push_back(200);
        notes.push_back(500);
        vector<int>res(5,0);
       for(int i=4;i>=0;i--){
           if(notes[i]!=0 && amount>=notes[i]){
             ll x=amount/notes[i];
               x=min(x,banknotes[i]);
               amount-=x*notes[i];
               res[i]+=x;
           }
       }
       
            if(amount==0){
                for(int i=0;i<5;i++)
                    banknotes[i]-=res[i];
                return res;
            }else
                return {-1};
       }
    
    
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */