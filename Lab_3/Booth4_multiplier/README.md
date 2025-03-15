# Booth Radix-4 Multiplier 
Configurable Radix-4 Booth multiplier implementing with Brent-Kung adder. Supports 2 ^ n bit-widths (4/16/32/64...).

## Key Features
• **Parameterized Design**: Customizable `MUL_SIZE` (4/16/32/64/128...)
• **Dual-mode Operation**: Supports both signed (Two's complement) & unsigned numbers

## Implementation
### FSM Workflow
```mermaid
stateDiagram-v2
    [*] --> IDLE : reset
    IDLE --> CALC : in_valid && out_ready
    CALC --> SEND : counter == MUL_SIZE/2-1
    SEND --> IDLE : out_valid && in_ready

    classDef default fill:none,stroke:#000,font-family:"Times New Roman"
    classDef transition fill:none,stroke:none,font-family:"Times New Roman"
```
## Verification
Following bit-widths have been verified : 8, 16, 32, 64.

![8-bit](png/8bit.png)
![16-bit](png/16bit.png)
![32-bit](png/32bit.png)
![64-bit](png/64bit.png)

## Contribution
Contributions to this project are highly encouraged and appreciated! Whether it's debug related, feature enhancements, or optimizations, your contributions can help improve the overall quality and functionality.