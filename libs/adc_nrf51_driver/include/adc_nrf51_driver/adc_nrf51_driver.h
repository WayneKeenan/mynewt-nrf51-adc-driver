#ifndef _NRF51_DRIVER_ADC_H_
#define _NRF51_DRIVER_ADC_H_

void * adc_init(void);
int adc_read(void *buffer, int buffer_len);

#endif /* _NRF51_DRIVER_ADC_H_ */
