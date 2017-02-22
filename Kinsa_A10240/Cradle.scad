difference() {
    union() {
        translate([-30, -20, 0]) cube([60, 40, 50]);
        translate([-30, -35, 0]) cube([60, 40, 10]);
       /*
        translate([0,8,0]) rotate([15,0,0]) linear_extrude(convexity = 10, $fn=128) 
            scale(0.30) import (file = "shape.dxf", layer = "Layer_1");
        */
    }
    
    union() {
        translate([0,8,6]) rotate([15,0,0]) linear_extrude(convexity = 10, $fn=128) 
            scale(0.15) import (file = "shape.dxf", layer = "Layer_1");
    }
    
}


