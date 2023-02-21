class colour_converter:
    def rgb_to_hex(red, green, blue): #Input RGB values.
        hex_value = 0
        hex_value = red*0x10000 + green*0x100 + blue
        hex_str =  str('#' + hex(hex_value))
        return hex_str.replace('0x', '')

    def hex_to_rgb(hex_value): #Input HEX string.
        red = '0x' + hex_value[1:3] 
        green = '0x' + hex_value[3:5] 
        blue = '0x' + hex_value[5:7] 
        return int(red, 16), int(green, 16), int(blue, 16)
