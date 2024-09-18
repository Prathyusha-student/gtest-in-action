//void alertInCelcius(float farenheit);
//int alertInCelciusFacade(float farenheit);

//Abstraction using Class Interface
// functionpointer
class INetworkAlerter{
public:
    virtual int alert(float celcius)=0;
};

int alertInCelciusFacade(float farenheit,INetworkAlerter *networkAlerterPtr);
