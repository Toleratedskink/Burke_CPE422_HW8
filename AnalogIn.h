class AnalogIn {
  private:
    int number;
  public:
    AnalogIn();
    AnalogIn(int n);
    int getNumber();
    void setNumber(int n);
    int readAdcSample();
    ~AnalogIn();
};
